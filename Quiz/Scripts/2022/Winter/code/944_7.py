try:
    
    try:
        print(5, end="")
        print(int(6%0), end="")
        print(4, end="")
    except BaseException: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(8, end="")
    finally:
        print(9, end="")
    
except: print('error')
