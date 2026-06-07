try:
    
    try:
        print(3, end="")
        print(int(1/0.0), end="")
        print(6, end="")
    except Exception: 
        print(9, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(5, end="")
    finally:
        print(0, end="")
    
except: print('error')
