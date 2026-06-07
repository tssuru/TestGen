try:
    
    try:
        print(2, end="")
        print(1==8, end="")
        print(8, end="")
    except BaseException: 
        print(0, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(1, end="")
    finally:
        print(9, end="")
    
except: print('error')
