try:
    
    try:
        print(4, end="")
        print(int("0"), end="")
        print(3, end="")
    except ValueError: 
        print(5, end="")
    except Exception: 
        print(9, end="")
    else:
        print(8, end="")
    finally:
        print(6, end="")
    
except: print('error')
