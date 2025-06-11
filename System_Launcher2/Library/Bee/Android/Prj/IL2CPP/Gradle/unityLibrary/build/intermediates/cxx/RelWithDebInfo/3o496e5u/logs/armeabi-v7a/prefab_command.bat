@echo off
"C:\\Program Files\\Unity\\Hub\\Editor\\6000.1.5f1\\Editor\\Data\\PlaybackEngines\\AndroidPlayer\\OpenJDK\\bin\\java" ^
  --class-path ^
  "C:\\Users\\overy\\.gradle\\caches\\modules-2\\files-2.1\\com.google.prefab\\cli\\2.1.0\\aa32fec809c44fa531f01dcfb739b5b3304d3050\\cli-2.1.0-all.jar" ^
  com.google.prefab.cli.AppKt ^
  --build-system ^
  cmake ^
  --platform ^
  android ^
  --abi ^
  armeabi-v7a ^
  --os-version ^
  23 ^
  --stl ^
  c++_shared ^
  --ndk-version ^
  27 ^
  --output ^
  "C:\\Users\\overy\\AppData\\Local\\Temp\\agp-prefab-staging6427838500499972175\\staged-cli-output" ^
  "C:\\Users\\overy\\.gradle\\caches\\8.11\\transforms\\cf11df13d2fd9a509170edfac64a04e6\\transformed\\jetified-games-activity-3.0.5\\prefab" ^
  "C:\\Users\\overy\\.gradle\\caches\\8.11\\transforms\\9e2da323fa37aa33f0b1b3514982095f\\transformed\\jetified-games-frame-pacing-2.1.2\\prefab"
