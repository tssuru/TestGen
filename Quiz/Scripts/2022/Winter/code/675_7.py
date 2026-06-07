try:
    
    try:
        print(8, end="")
        print(int(6%3), end="")
        print(4, end="")
    except BaseException: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(0, end="")
    finally:
        print(8, end="")
    
except: print('error')
