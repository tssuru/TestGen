try:
    
    try:
        print(3, end="")
        print(int(2%0.0), end="")
        print(7, end="")
    except Exception: 
        print(8, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    else:
        print(4, end="")
    finally:
        print(0, end="")
    
except: print('error')
