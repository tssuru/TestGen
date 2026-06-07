try:
    
    try:
        print(0, end="")
        print(int("8"), end="")
        print(6, end="")
    except Exception: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(5, end="")
    finally:
        print(3, end="")
    
except: print('error')
