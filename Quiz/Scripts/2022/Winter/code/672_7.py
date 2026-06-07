try:
    
    try:
        print(2, end="")
        print(int("5"), end="")
        print(9, end="")
    except Exception: 
        print(9, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
