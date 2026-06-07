try:
    
    try:
        print(3, end="")
        print(int("9"), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(1, end="")
    finally:
        print(0, end="")
    
except: print('error')
