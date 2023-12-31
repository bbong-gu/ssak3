// import React, { useState } from "react";
// import TurtlebotController from "./components/turtlebotcontroller/index.jsx";
import './App.css';

import { BrowserRouter as Router, Route, Routes } from 'react-router-dom';
import TurtleBotStarter from './pages/Control';
import Login from './pages/Auth/LogIn';
import Signup from './pages/Auth/SignUp';
import TurtlebotController from './pages/Main';
import TurtleBotLog from './pages/Log';
import DetailSchedule from './pages/Control/DetailSchedule';
import AddSchedule from './pages/Control/AddSchedule';
import AddTuttle from './pages/Main/AddTuttle';
import NonEntryMain from './pages/Main/nonEntryMain';
import Schedule from './pages/Control/scheduler';

function App() {
  return (
  <>
    <Router>
      <Routes>
        <Route path="/" element={<Login/>} />
        <Route path="signup" element={<Signup/>} />
        <Route path="main" element={<TurtlebotController/>} />
        <Route path="start" element={<TurtleBotStarter/>} />
        <Route path="log" element={<TurtleBotLog/>} />
        <Route path="detailschedule" element={<DetailSchedule/>} />
        <Route path="addschedule" element={<AddSchedule/>} />
        <Route path="schedule" element={<Schedule/>} />
        <Route path="addturtle" element={<AddTuttle/>} />
        <Route path="test" element={<NonEntryMain/>} />
      </Routes>
    </Router>
  </>
  );
}

export default App;
