try:
    
    try:
        print(2, end="")
        print(int(0/2), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    except Exception: 
        print(7, end="")
    else:
        print(4, end="")
    finally:
        print(1, end="")
    
except: print('error')
