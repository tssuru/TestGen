try:
    
    try:
        print(9, end="")
        print(int(1%1), end="")
        print(2, end="")
    except BaseException: 
        print(0, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
