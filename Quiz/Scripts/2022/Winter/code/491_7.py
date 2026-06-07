try:
    
    try:
        print(7, end="")
        print(int("8"), end="")
        print(0, end="")
    except Exception: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    else:
        print(6, end="")
    finally:
        print(9, end="")
    
except: print('error')
