try:
    
    try:
        print(1, end="")
        print(int(4//0.0), end="")
        print(6, end="")
    except BaseException: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(4, end="")
    finally:
        print(1, end="")
    
except: print('error')
