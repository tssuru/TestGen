try:
    
    try:
        print(5, end="")
        print(3==2, end="")
        print(8, end="")
    except BaseException: 
        print(9, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(0, end="")
    finally:
        print(4, end="")
    
except: print('error')
