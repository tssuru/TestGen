try:
    
    try:
        print(3, end="")
        print(int(2/2), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except BaseException: 
        print(5, end="")
    else:
        print(4, end="")
    finally:
        print(1, end="")
    
except: print('error')
