try:
    
    try:
        print(1, end="")
        print(int("c6"), end="")
        print(5, end="")
    except ValueError: 
        print(5, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(3, end="")
    finally:
        print(6, end="")
    
except: print('error')
