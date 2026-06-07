try:
    
    try:
        print(2, end="")
        print(int(7/0), end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except Exception: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(6, end="")
    
except: print('error')
