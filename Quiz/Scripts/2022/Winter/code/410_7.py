try:
    
    try:
        print(7, end="")
        print(int("3"), end="")
        print(4, end="")
    except TypeError: 
        print(5, end="")
    except ValueError: 
        print(8, end="")
    else:
        print(0, end="")
    finally:
        print(2, end="")
    
except: print('error')
