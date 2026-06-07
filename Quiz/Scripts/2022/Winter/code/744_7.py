try:
    
    try:
        print(1, end="")
        print(int(0%2), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except BaseException: 
        print(5, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
