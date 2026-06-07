try:
    
    try:
        print(9, end="")
        print(int("d3"), end="")
        print(7, end="")
    except BaseException: 
        print(4, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(6, end="")
    finally:
        print(0, end="")
    
except: print('error')
