/*
지상 - 위성간 데이터 수신부 프로그램

위성측에서 생성된 데이터들을 수신하는 프로그램

nrf24l01을 통해 데이터를 수신

수신된 데이터는  0x00 바이트 데이터들을 변조

시리얼 통신으로 지상측 보조 프로그램에 전

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
nrf24l01을 이용해 단순히 데이터를 수신할 뿐
시리얼 통신에 의한 데이터 변조 이외의 다른 작업은 
진행하지 않는다.
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/