try:
    
    try:
        print(5, end="")
        print(int("3"), end="")
        print(5, end="")
    except ValueError: 
        print(0, end="")
    except Exception: 
        print(1, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
