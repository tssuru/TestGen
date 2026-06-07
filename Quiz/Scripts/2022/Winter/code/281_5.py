try:
    
    a,b,c=8,9,6
    def h(a,b,c=7):
        print(a,b,c,end="")
    
    h(a=4,2,b=3)
    print(a,b,c)
    
except: print('error')
