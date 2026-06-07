try:
    
    try:
        print(4, end="")
        print(3<9, end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(5, end="")
    finally:
        print(9, end="")
    
except: print('error')
