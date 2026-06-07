try:
    
    try:
        print(6, end="")
        print(int(5%0), end="")
        print(4, end="")
    except BaseException: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
