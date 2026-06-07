try:
    
    try:
        print(2, end="")
        print(int(7//0.0), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    except Exception: 
        print(9, end="")
    else:
        print(3, end="")
    finally:
        print(1, end="")
    
except: print('error')
