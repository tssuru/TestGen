try:
    
    try:
        print(3, end="")
        print(int(8//1), end="")
        print(5, end="")
    except ValueError: 
        print(3, end="")
    except Exception: 
        print(1, end="")
    else:
        print(4, end="")
    finally:
        print(9, end="")
    
except: print('error')
