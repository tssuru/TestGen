try:
    
    try:
        print(6, end="")
        print(int("d5"), end="")
        print(1, end="")
    except TypeError: 
        print(2, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(8, end="")
    
except: print('error')
