try:
    
    try:
        print(9, end="")
        print(int("d8"), end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except Exception: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
