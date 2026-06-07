try:
    
    try:
        print(0, end="")
        print(int("b9"), end="")
        print(7, end="")
    except ValueError: 
        print(8, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(7, end="")
    finally:
        print(2, end="")
    
except: print('error')
