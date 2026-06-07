try:
    
    try:
        print(5, end="")
        print(int(8//0.0), end="")
        print(6, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(8, end="")
    finally:
        print(2, end="")
    
except: print('error')
