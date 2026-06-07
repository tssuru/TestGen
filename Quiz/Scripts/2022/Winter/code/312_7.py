try:
    
    try:
        print(1, end="")
        print(int("3"), end="")
        print(5, end="")
    except ValueError: 
        print(8, end="")
    except Exception: 
        print(1, end="")
    else:
        print(3, end="")
    finally:
        print(6, end="")
    
except: print('error')
