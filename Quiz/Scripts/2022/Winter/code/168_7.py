try:
    
    try:
        print(3, end="")
        print(int(4%3), end="")
        print(8, end="")
    except ValueError: 
        print(3, end="")
    except Exception: 
        print(9, end="")
    else:
        print(1, end="")
    finally:
        print(5, end="")
    
except: print('error')
