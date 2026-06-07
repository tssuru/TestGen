try:
    
    try:
        print(0, end="")
        print(2!=5, end="")
        print(1, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except BaseException: 
        print(5, end="")
    else:
        print(3, end="")
    finally:
        print(2, end="")
    
except: print('error')
