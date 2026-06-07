try:
    a,b,c=8,5,2
    def h(b):
        a=1
        b*=4
        c=3
        return a+b+c
    
    a,b,c=1,0,7
    print(h(a),a,b,c)
    
except: print('error')
