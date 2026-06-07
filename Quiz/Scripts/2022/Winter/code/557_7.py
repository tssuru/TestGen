try:
    
    try:
        print(6, end="")
        print(int(9/1), end="")
        print(5, end="")
    except BaseException: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    else:
        print(8, end="")
    finally:
        print(0, end="")
    
except: print('error')
