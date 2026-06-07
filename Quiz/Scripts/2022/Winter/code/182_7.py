try:
    
    try:
        print(8, end="")
        print(int(2//1), end="")
        print(1, end="")
    except ValueError: 
        print(9, end="")
    except Exception: 
        print(5, end="")
    else:
        print(7, end="")
    finally:
        print(6, end="")
    
except: print('error')
