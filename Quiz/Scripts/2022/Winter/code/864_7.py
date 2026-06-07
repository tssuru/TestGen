try:
    
    try:
        print(2, end="")
        print(int(7%2), end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except BaseException: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(3, end="")
    
except: print('error')
