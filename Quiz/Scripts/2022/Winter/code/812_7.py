try:
    
    try:
        print(0, end="")
        print(int(6//3), end="")
        print(9, end="")
    except Exception: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(4, end="")
    
except: print('error')
