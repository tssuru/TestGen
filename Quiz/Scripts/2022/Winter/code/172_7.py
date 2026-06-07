try:
    
    try:
        print(3, end="")
        print(int("5"), end="")
        print(0, end="")
    except ValueError: 
        print(8, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
