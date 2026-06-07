try:
    
    try:
        print(3, end="")
        print(int(8//1), end="")
        print(1, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(0, end="")
    finally:
        print(4, end="")
    
except: print('error')
