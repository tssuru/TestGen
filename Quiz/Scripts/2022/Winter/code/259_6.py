try:
    a,b,c=4,3,0
    def h(b):
        a=5
        b*=3
        c=1
        return a+b+c
    
    a,b,c=1,7,5
    print(h(a),a,b,c)
    
except: print('error')
