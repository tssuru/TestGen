try:
    
    try:
        print(2, end="")
        print(int("3"), end="")
        print(4, end="")
    except ValueError: 
        print(0, end="")
    except TypeError: 
        print(7, end="")
    else:
        print(4, end="")
    finally:
        print(1, end="")
    
except: print('error')
