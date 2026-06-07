try:
    a,b,c=8,9,7
    def h(a,b,c=6):
        print(a,b,c,end=" ")
    
    h(0,5)
    print(a,b,c)
    
except: print('error')
