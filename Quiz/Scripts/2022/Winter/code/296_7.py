try:
    
    try:
        print(9, end="")
        print(int(6%2), end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except BaseException: 
        print(5, end="")
    else:
        print(4, end="")
    finally:
        print(7, end="")
    
except: print('error')
