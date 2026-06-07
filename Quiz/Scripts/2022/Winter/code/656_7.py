try:
    
    try:
        print(3, end="")
        print(int(7//2), end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    except BaseException: 
        print(6, end="")
    else:
        print(0, end="")
    finally:
        print(4, end="")
    
except: print('error')
