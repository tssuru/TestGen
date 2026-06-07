try:
    
    try:
        print(6, end="")
        print(int("2"), end="")
        print(5, end="")
    except Exception: 
        print(0, end="")
    except ValueError: 
        print(7, end="")
    else:
        print(3, end="")
    finally:
        print(8, end="")
    
except: print('error')
