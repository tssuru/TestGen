try:
    
    try:
        print(5, end="")
        print(int(0/0), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(1, end="")
    finally:
        print(4, end="")
    
except: print('error')
