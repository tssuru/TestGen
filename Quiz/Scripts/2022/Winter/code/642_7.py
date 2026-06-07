try:
    
    try:
        print(4, end="")
        print(int("d7"), end="")
        print(5, end="")
    except BaseException: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(4, end="")
    finally:
        print(8, end="")
    
except: print('error')
