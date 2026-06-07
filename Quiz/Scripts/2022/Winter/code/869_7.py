try:
    
    try:
        print(0, end="")
        print(int(5/0.0), end="")
        print(9, end="")
    except Exception: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    else:
        print(3, end="")
    finally:
        print(1, end="")
    
except: print('error')
