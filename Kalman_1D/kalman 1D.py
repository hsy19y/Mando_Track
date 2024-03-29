import pandas as pd
from filterpy.kalman import KalmanFilter
import matplotlib.pyplot as plt

# Load Excel file
df = pd.read_excel('C:/Users/hsyun/Desktop/Test/position_data.xlsx')  # Replace 'data.xlsx' with your file path

# Extract x, y, and z coordinate data
x_data = df['stateEstimate.x_y'].values
y_data = df['stateEstimate.y_y'].values
z_data = df['stateEstimate.z_y'].values

# Define Kalman filter for 1D
def apply_kalman_filter(data, Q=0.01, R=0.1):
    kf = KalmanFilter(dim_x=1, dim_z=1)
    kf.x = data[0]  # initial state (mean)
    kf.P *= 10  # initial state covariance
    kf.Q = Q  # process noise covariance
    kf.R = R  # measurement noise covariance
    filtered_data = []
    for measurement in data:
        kf.predict()
        kf.update(measurement)
        filtered_data.append(kf.x[0])
    return filtered_data

# Apply Kalman filter to x, y, and z data
filtered_x = apply_kalman_filter(x_data, Q=0.01, R=0.1)
filtered_y = apply_kalman_filter(y_data, Q=0.01, R=0.1)
filtered_z = apply_kalman_filter(z_data, Q=0.01, R=0.1)

plt.figure(figsize=(12, 6))

plt.subplot(1, 2, 1)  # Create subplot for x-y data
plt.plot(x_data, label='Original x')
plt.plot(filtered_x, label='Filtered x', linestyle='--')
plt.plot(y_data, label='Original y')
plt.plot(filtered_y, label='Filtered y', linestyle='--')
plt.xlabel('Time')
plt.ylabel('Coordinate Value')
plt.title('Kalman Filter 1D Applied to X-Y Coordinate Data')
plt.legend()
plt.grid(True)

# Plot z data
plt.subplot(1, 2, 2)  # Create subplot for z data
plt.plot(z_data, label='Original z')
plt.plot(filtered_z, label='Filtered z', linestyle='--')
plt.xlabel('Time')
plt.ylabel('Coordinate Value')
plt.title('Kalman Filter 1D Applied to Z Coordinate Data')
plt.legend()
plt.grid(True)

plt.tight_layout()  # Adjust layout to prevent overlap
plt.show()

# # Plot filtered data
# plt.figure(figsize=(10, 6))
# plt.plot(x_data, label='Original x')
# plt.plot(filtered_x, label='Filtered x', linestyle='--')
# plt.plot(y_data, label='Original y')
# plt.plot(filtered_y, label='Filtered y', linestyle='--')
# plt.plot(z_data, label='Original z')
# plt.plot(filtered_z, label='Filtered z', linestyle='--')
# plt.xlabel('Time')
# plt.ylabel('Coordinate Value')
# plt.title('Kalman Filter 1D Applied to Coordinate Data')
# plt.legend()
# plt.grid(True)
# plt.show()