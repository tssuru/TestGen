try:
    
    try:
        print(0, end="")
        print(int(7//3), end="")
        print(5, end="")
    except Exception: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(3, end="")
    finally:
        print(8, end="")
    
except: print('error')
